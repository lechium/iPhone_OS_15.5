//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SearchHomeNoDataLayoutProvider : NSObject
{
}

- (id)layoutSectionWithLayoutEnvironment:(id)arg1 estimatedHeaderHeight:(double)arg2 estimatedFooterHeight:(double)arg3 deletionBlock:(CDUnknownBlockType)arg4 objectsCount:(unsigned long long)arg5 mapsTheme:(id)arg6;	// IMP=0x00200000002c698e
- (id)cellForRowAtIndexPath:(id)arg1 collectionView:(id)arg2 item:(id)arg3;	// IMP=0x00100000002c68a7
- (long long)type;	// IMP=0x00100000002c689f
- (id)cellReuseIdentifier;	// IMP=0x00100000002c6886
- (id)cellClasses;	// IMP=0x00100000002c681a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

