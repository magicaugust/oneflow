#ifndef ONEFLOW_CORE_KERNEL_EMBEDDING_LOOKUP_MDDIFFACC_KERNEL_H_
#define ONEFLOW_CORE_KERNEL_EMBEDDING_LOOKUP_MDDIFFACC_KERNEL_H_

#include "oneflow/core/kernel/kernel.h"

namespace oneflow {

template<DeviceType device_type, typename T>
class EmbeddingLookupMdDiffAccKernel final : public KernelIf<device_type> {
 public:
  OF_DISALLOW_COPY_AND_MOVE(EmbeddingLookupMdDiffAccKernel);
  EmbeddingLookupMdDiffAccKernel() = default;
  ~EmbeddingLookupMdDiffAccKernel() = default;

  void ForwardDataContent(const KernelCtx&,
                          std::function<Blob*(const std::string&)>) const override;

 private:
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_KERNEL_EMBEDDING_LOOKUP_MDDIFFACC_KERNEL_H_
