//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSArray, NSString;

@interface STMutableListData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>
{
}

- (_Bool)applyDiff:(id)arg1;	// IMP=0x000000000001282b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000127f3
- (void)removeAllOccurrencesOfObject:(id)arg1;	// IMP=0x00000000000127dd
- (void)removeObject:(id)arg1;	// IMP=0x0000000000012793
- (void)addObject:(id)arg1;	// IMP=0x000000000001277d
@property(copy, nonatomic) NSArray *objects; // @dynamic objects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
