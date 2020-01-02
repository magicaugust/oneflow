import os
import numpy
from absl import app
from absl.testing import absltest
import env_2node
import cnns_tests
from test_1node_mixin import Test1NodeMixin
from test_2node_mixin import Test2NodeMixin

class TestNodeMixin(Test1NodeMixin, Test2NodeMixin):
  pass

class TestAlexNet(TestNodeMixin, cnns_tests.TestAlexNetMixin, absltest.TestCase):
  pass

class TestResNet50(TestNodeMixin, cnns_tests.TestResNet50Mixin, absltest.TestCase):
  pass

class TestVgg16(TestNodeMixin, cnns_tests.TestVgg16Mixin, absltest.TestCase):
  pass

class TestInceptionV3(TestNodeMixin, cnns_tests.TestInceptionV3Mixin, absltest.TestCase):
  pass

def main(argv):
  env_2node.Init()
  absltest.main()

if __name__ == '__main__': app.run(main)