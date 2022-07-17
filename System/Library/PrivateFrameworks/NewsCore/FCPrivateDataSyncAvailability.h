//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncAvailability-Protocol.h>

@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>
{
    NSArray *_conditions;	// 8 = 0x8
}

+ (id)notAvailable;	// IMP=0x00000000000ef500
+ (id)defaultAvailability;	// IMP=0x00000000000ef3ee
- (void).cxx_destruct;	// IMP=0x00000000000ef752
@property(readonly, copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, nonatomic, getter=isPrivateDataSyncingAllowed) _Bool privateDataSyncingAllowed;
- (id)initWithConditions:(id)arg1;	// IMP=0x00000000000ef5ba

@end
