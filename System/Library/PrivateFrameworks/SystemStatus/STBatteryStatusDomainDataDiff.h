//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainDataDiff-Protocol.h>

@class BSSettings, NSString;

@interface STBatteryStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>
{
    BSSettings *_changes;	// 8 = 0x8
}

+ (void)_resolveCombinedChanges:(id)arg1 forObjectEntry:(unsigned long long)arg2 baseChanges:(id)arg3;	// IMP=0x00000000000215b0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000214a2
+ (id)diffFromData:(id)arg1 toData:(id)arg2;	// IMP=0x0000000000020ba8
- (void).cxx_destruct;	// IMP=0x000000000002168f
@property(readonly, copy, nonatomic) BSSettings *changes; // @synthesize changes=_changes;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021523
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000214aa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000212ea
- (id)diffByApplyingDiff:(id)arg1;	// IMP=0x00000000000211dc
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)applyToMutableData:(id)arg1;	// IMP=0x0000000000020f37
- (id)dataByApplyingToData:(id)arg1;	// IMP=0x0000000000020ef1
- (id)initWithChanges:(id)arg1;	// IMP=0x0000000000020e7e
- (id)init;	// IMP=0x0000000000020e3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

