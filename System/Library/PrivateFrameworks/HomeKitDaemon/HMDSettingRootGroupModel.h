//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDConflictResolutionModel-Protocol.h>

@class NSUUID;

@interface HMDSettingRootGroupModel <HMDConflictResolutionModel>
{
}

+ (id)hmbProperties;	// IMP=0x00000000009fafd5
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x00000000009faf99
- (id)nameForKeyPath;	// IMP=0x00000000009faf87
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;	// IMP=0x00000000009faef3

// Remaining properties
@property(copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

@end

