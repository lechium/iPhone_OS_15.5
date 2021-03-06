//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberContactItem : NSObject <NSCopying>
{
    _Bool _unreachable;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSString *_detailLabel;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
}

+ (id)typeLabelStringFromContactType:(long long)arg1;	// IMP=0x00000000000dfd0a
+ (id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1;	// IMP=0x00000000000dfc09
- (void).cxx_destruct;	// IMP=0x00000000000dfbd6
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic, getter=isUnreachable) _Bool unreachable; // @synthesize unreachable=_unreachable;
@property(readonly, nonatomic) NSString *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (unsigned long long)hash;	// IMP=0x00000000000dfa0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df89a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df88f
- (id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(_Bool)arg4;	// IMP=0x00000000000df7bc
- (id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(_Bool)arg3;	// IMP=0x00000000000df6f8
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000000df6e1
- (id)init;	// IMP=0x00000000000df6a4

@end

