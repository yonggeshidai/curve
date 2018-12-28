/*
 * Project: curve
 * Created Date: Mon Dec 24 2018
 * Author: lixiaocui
 * Copyright (c) 2018 netease
 */


#ifndef CURVE_SRC_MDS_SCHEDULE_FORTEST_COMMON_H
#define CURVE_SRC_MDS_SCHEDULE_FORTEST_COMMON_H

#include <boost/shared_ptr.hpp>
#include "src/mds/schedule/operatorStep.h"
#include "src/mds/schedule/topoAdapter.h"
#include "proto/heartbeat.pb.h"

using ::curve::mds::schedule::TransferLeader;
using ::curve::mds::schedule::AddPeer;
using ::curve::mds::schedule::RemovePeer;
using ::curve::mds::schedule::PeerInfo;
using ::curve::mds::schedule::CopySetConf;
using ::curve::mds::topology::EpochType;
using ::curve::mds::topology::ChunkServerIdType;
using ::curve::mds::topology::ServerIdType;
using ::curve::mds::topology::PoolIdType;
using ::curve::mds::topology::CopySetIdType;
using ::curve::mds::topology::LogicalPoolType;
using ::curve::mds::heartbeat::CandidateError;

namespace curve {
namespace mds {
namespace schedule {
::curve::mds::schedule::CopySetInfo GetCopySetInfoForTest();
::curve::mds::topology::LogicalPool GetLogicalPoolForTest();
}  // namespace schedule
}  // namespace mds
}  // namespace curve

#endif  // CURVE_SRC_MDS_SCHEDULE_FORTEST_COMMON_H