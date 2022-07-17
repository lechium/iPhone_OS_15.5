//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding>
{
    IMPluginPayload *_pluginPayload;	// 8 = 0x8
    UIImage *_composeImage;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041d8aa
+ (id)unarchiveFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000041d650
+ (id)pluginDisplayContainerWithPluginPayload:(id)arg1 composeImage:(id)arg2;	// IMP=0x000000000041cd4b
- (void).cxx_destruct;	// IMP=0x000000000041da91
@property(retain, nonatomic) UIImage *composeImage; // @synthesize composeImage=_composeImage;
@property(retain, nonatomic) IMPluginPayload *pluginPayload; // @synthesize pluginPayload=_pluginPayload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041d9ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041d8b2
- (id)pasteboardItemProvider;	// IMP=0x000000000041d176
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange)arg2;	// IMP=0x000000000041cde2

@end
