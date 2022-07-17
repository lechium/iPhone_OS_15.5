//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REElementDataSource.h>

@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource
{
    NTKUpNextElementDataSource *_newsDataSourceProxy;	// 8 = 0x8
}

+ (_Bool)wantsReloadForSignificantTimeChange;	// IMP=0x00000000002dba24
+ (id)bundleIdentifier;	// IMP=0x00000000002db388
+ (Class)nanoNewsDataSourceClass;	// IMP=0x00000000002db04d
+ (unsigned long long)elementContentMode;	// IMP=0x00000000002db045
- (void).cxx_destruct;	// IMP=0x00000000002dbafb
@property(retain, nonatomic) NTKUpNextElementDataSource *newsDataSourceProxy; // @synthesize newsDataSourceProxy=_newsDataSourceProxy;
- (void)setAllowsLocationUse:(_Bool)arg1;	// IMP=0x00000000002db9ad
- (void)resume;	// IMP=0x00000000002db970
- (void)pause;	// IMP=0x00000000002db933
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002db7ac
- (void)getElementsInSection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002db537
- (id)supportedSections;	// IMP=0x00000000002db459
- (void)setState:(unsigned long long)arg1;	// IMP=0x00000000002db311
- (void)setRunning:(_Bool)arg1;	// IMP=0x00000000002db29a
- (void)setDelegate:(id)arg1;	// IMP=0x00000000002db1e2
- (id)init;	// IMP=0x00000000002db142

@end
