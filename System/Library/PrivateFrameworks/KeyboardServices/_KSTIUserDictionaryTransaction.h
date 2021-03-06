//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    _KSTIUserDictionaryEntryValue *_valueToDelete;	// 8 = 0x8
    _KSTIUserDictionaryEntryValue *_valueToInsert;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003344c
- (void).cxx_destruct;	// IMP=0x0000000000033671
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
- (id)description;	// IMP=0x0000000000033591
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003352e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033454

@end

