//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController
{
    MKMapItem *_mapItem;	// 8 = 0x8
    NSMutableDictionary *_cacheVC;	// 16 = 0x10
    NSMutableDictionary *_cacheModuleType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025e9ae
@property(retain, nonatomic) NSMutableDictionary *cacheModuleType; // @synthesize cacheModuleType=_cacheModuleType;
@property(retain, nonatomic) NSMutableDictionary *cacheVC; // @synthesize cacheVC=_cacheVC;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (id)_createViewControllerForModule:(id)arg1;	// IMP=0x000000000025e937
- (id)_cachedViewControllerForModule:(int)arg1;	// IMP=0x000000000025e8b0
- (void)_createModuleLayout:(id)arg1;	// IMP=0x000000000025e465
- (id)_layoutModuleForMapItem;	// IMP=0x000000000025e380
- (_Bool)isLayoutDynamic;	// IMP=0x000000000025e34d
- (_Bool)isTransitItem;	// IMP=0x000000000025e309

@end
