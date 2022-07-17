//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject
{
    CNCache *_directoryServerReuseCache;	// 8 = 0x8
    CNCache *_calendarServerReuseCache;	// 16 = 0x10
}

+ (id)cacheBoundaryStrategies;	// IMP=0x00000000000277d7
- (void).cxx_destruct;	// IMP=0x00000000000278d3
@property(readonly) CNCache *calendarServerReuseCache; // @synthesize calendarServerReuseCache=_calendarServerReuseCache;
@property(readonly) CNCache *directoryServerReuseCache; // @synthesize directoryServerReuseCache=_directoryServerReuseCache;
- (id)init;	// IMP=0x0000000000027677

@end
