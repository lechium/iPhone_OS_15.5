//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IMAssociatedStickerChatItem
{
    NSString *_transferGUID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000007caf6
@property(readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3;	// IMP=0x000000000007c765
- (_Bool)canDelete;	// IMP=0x000000000007c75d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c6bf
- (id)description;	// IMP=0x000000000007c632

@end
