//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _previewUpdateObserver;	// 8 = 0x8
    CDUnknownBlockType _payloadUpdateObserver;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    _Bool _startedPayloadLoad;	// 32 = 0x20
    _Bool _needsAnotherPreviewGeneration;	// 33 = 0x21
    long long _previewType;	// 40 = 0x28
    UIImage *_previewImage;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    id _payload;	// 64 = 0x40
    NSURL *_payloadSourceFileURL;	// 72 = 0x48
    NSItemProvider *_itemProvider;	// 80 = 0x50
    NSString *_typeIdentifier;	// 88 = 0x58
    long long _itemProviderPreviewType;	// 96 = 0x60
    long long _downsampleStatus;	// 104 = 0x68
}

+ (_Bool)attachmentTypeRepresentsAnImage:(long long)arg1;	// IMP=0x000000000002ff0a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002fd03
- (void).cxx_destruct;	// IMP=0x0000000000030147
@property(nonatomic) _Bool needsAnotherPreviewGeneration; // @synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration;
@property(nonatomic) _Bool startedPayloadLoad; // @synthesize startedPayloadLoad=_startedPayloadLoad;
@property(nonatomic) long long downsampleStatus; // @synthesize downsampleStatus=_downsampleStatus;
@property(readonly, nonatomic) long long itemProviderPreviewType; // @synthesize itemProviderPreviewType=_itemProviderPreviewType;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(copy, nonatomic) NSURL *payloadSourceFileURL; // @synthesize payloadSourceFileURL=_payloadSourceFileURL;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property long long previewType; // @synthesize previewType=_previewType;
- (id)description;	// IMP=0x000000000002ff1a
- (void)setPayloadUpdateObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fdbe
- (void)setPreviewUpdateObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fd99
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002faf8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f8a3
- (id)_uniqueIdentifier;	// IMP=0x000000000002f861
- (id)initWithPayload:(id)arg1 type:(long long)arg2 previewImage:(id)arg3;	// IMP=0x000000000002f799
- (id)init;	// IMP=0x000000000002f780

@end
