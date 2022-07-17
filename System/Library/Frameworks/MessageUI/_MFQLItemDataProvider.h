//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/QLPreviewItemDataProvider-Protocol.h>

@class NSData, NSString, QLItem;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider>
{
    NSData *_data;	// 8 = 0x8
    QLItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000079921
@property(readonly, nonatomic) QLItem *item; // @synthesize item=_item;
- (id)provideDataForItem:(id)arg1;	// IMP=0x0000000000079909
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;	// IMP=0x00000000000797f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
