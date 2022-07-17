//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/QLPreviewItemDataProvider-Protocol.h>

@class NSString, NSURL, QLItem, UTType;

@interface MailQLItemDataProvider : NSObject <QLPreviewItemDataProvider>
{
    UTType *_contentType;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003d65
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UTType *contentType; // @synthesize contentType=_contentType;
- (id)provideDataForItem:(id)arg1;	// IMP=0x0000000000003d19
@property(readonly, copy, nonatomic) QLItem *item;
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000003b2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
