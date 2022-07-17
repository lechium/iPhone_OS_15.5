//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _value;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    unsigned long long _notificationType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004567f4
- (void).cxx_destruct;	// IMP=0x0000000000456c31
@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;	// IMP=0x0000000000456b03
- (unsigned long long)hash;	// IMP=0x0000000000456a7f
- (_Bool)isEqualToPreferencesNotification:(id)arg1;	// IMP=0x0000000000456a2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004569c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000456950
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004568c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004567fc
- (id)dictionaryRepresentation;	// IMP=0x0000000000456705
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000456628

@end
