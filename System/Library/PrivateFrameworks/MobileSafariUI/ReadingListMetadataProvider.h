//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/ReadingListMetadataProvider-Protocol.h>

@class LPMetadataProvider, NSString;

__attribute__((visibility("hidden")))
@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider>
{
    LPMetadataProvider *_lpMetadataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009ba2e
- (void)fetchMetadataForBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b460
- (id)init;	// IMP=0x000000000009b358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
