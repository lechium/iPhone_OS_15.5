//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKMessageAcknowledgment-Protocol.h>

@class NSString, UIColor;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment>
{
    long long _messageAcknowledgmentType;	// 8 = 0x8
}

+ (id)allMessageAcknowledgmentDescriptors;	// IMP=0x00000000001f7972
+ (id)acknowledgmentBarColor;	// IMP=0x00000000001f78ec
@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
@property(readonly, nonatomic) UIColor *selectedBalloonColor;
@property(readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property(readonly, nonatomic) UIColor *acknowledgmentImageColor;
- (long long)themeColor;	// IMP=0x00000000001f7732
@property(readonly, nonatomic) NSString *acknowledgmentImageName;
- (id)initWithMessageAcknowledgmentType:(long long)arg1;	// IMP=0x00000000001f7682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

