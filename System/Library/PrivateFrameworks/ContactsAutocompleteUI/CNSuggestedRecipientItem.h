//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNComposeRecipient, NSMutableSet, NSString;

@interface CNSuggestedRecipientItem : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    CNComposeRecipient *_recipient;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSMutableSet *_handles;	// 32 = 0x20
}

+ (id)os_log;	// IMP=0x00000000000028d5
- (void).cxx_destruct;	// IMP=0x00000000000030a4
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSMutableSet *handles; // @synthesize handles=_handles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
- (id)description;	// IMP=0x0000000000002f83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002ece
- (unsigned long long)hash;	// IMP=0x0000000000002e60
- (_Bool)shouldDeselectForHandles:(id)arg1;	// IMP=0x0000000000002cb3
- (_Bool)isSelectedForHandles:(id)arg1;	// IMP=0x0000000000002ae0
- (void)loadHandles;	// IMP=0x00000000000029ff
- (id)initWithRecipient:(id)arg1;	// IMP=0x0000000000002931

@end
