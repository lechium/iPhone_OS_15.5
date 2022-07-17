//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _useDarkColor;	// 8 = 0x8
    _Bool _useLargeFont;	// 9 = 0x9
    NSString *_label;	// 16 = 0x10
    NSDecimalNumber *_amount;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    NSString *_localizedTitle;	// 40 = 0x28
    NSString *_localizedAmount;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017687c
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000000176382
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2;	// IMP=0x00000000001762f2
+ (long long)version;	// IMP=0x00000000001762e7
+ (id)_deferredSummaryItemWithProtobuf:(id)arg1;	// IMP=0x0000000000170642
+ (id)_recurringSummaryItemWithProtobuf:(id)arg1;	// IMP=0x0000000000170504
+ (id)itemWithProtobuf:(id)arg1;	// IMP=0x00000000001700fe
- (void).cxx_destruct;	// IMP=0x0000000000176cdf
@property(nonatomic) _Bool useLargeFont; // @synthesize useLargeFont=_useLargeFont;
@property(nonatomic) _Bool useDarkColor; // @synthesize useDarkColor=_useDarkColor;
@property(copy, nonatomic) NSString *localizedAmount; // @synthesize localizedAmount=_localizedAmount;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)dictionaryRepresentation;	// IMP=0x0000000000176b7b
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000176a3e
- (_Bool)isEqualToPaymentSummaryItem:(id)arg1;	// IMP=0x000000000017695f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001768f7
- (unsigned long long)hash;	// IMP=0x0000000000176884
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017676a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017657e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001764bc
- (id)_protobufDeferredSummaryItemForItem:(id)arg1;	// IMP=0x000000000017083b
- (id)_protobufRecurringSummaryItemForItem:(id)arg1;	// IMP=0x00000000001706e4
- (id)summaryItemProtobuf;	// IMP=0x0000000000170323

@end
