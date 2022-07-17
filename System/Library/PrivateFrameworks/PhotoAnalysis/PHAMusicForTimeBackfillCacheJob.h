//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAMusicJob-Protocol.h>

@class NSString;

@interface PHAMusicForTimeBackfillCacheJob : NSObject <PHAMusicJob>
{
}

- (_Bool)shouldRunForLibrary:(id)arg1;	// IMP=0x0000000000071b85
- (void)runWithGraphManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000719eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
