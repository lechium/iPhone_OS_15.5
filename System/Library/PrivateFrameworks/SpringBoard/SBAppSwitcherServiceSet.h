//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying>
{
    NSMutableArray *_services;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000477026
@property(readonly, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (id)appLayouts;	// IMP=0x0000000000476ee2
- (id)serviceBundleIdentifiers;	// IMP=0x0000000000476d29
- (id)serviceForBundleIdentifier:(id)arg1;	// IMP=0x0000000000476b61
- (id)serviceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000476b12
- (unsigned long long)count;	// IMP=0x0000000000476afc
- (void)removeService:(id)arg1;	// IMP=0x0000000000476ae6
- (void)addService:(id)arg1;	// IMP=0x0000000000476a8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000476a59
- (id)initWithServices:(id)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x00000000004769ae

@end
