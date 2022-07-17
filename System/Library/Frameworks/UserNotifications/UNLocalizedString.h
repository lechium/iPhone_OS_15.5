//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface UNLocalizedString : NSString
{
    NSString *_key;	// 8 = 0x8
    NSArray *_arguments;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000137ec
+ (id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;	// IMP=0x00000000000131f9
- (void).cxx_destruct;	// IMP=0x0000000000013b05
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013ac7
- (id)un_localizedStringValue;	// IMP=0x0000000000013aa2
- (id)un_localizedStringKey;	// IMP=0x0000000000013a7d
- (id)un_localizedStringArguments;	// IMP=0x0000000000013a58
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013905
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000137fc
- (_Bool)_allowsDirectEncoding;	// IMP=0x00000000000137f4
- (Class)classForKeyedArchiver;	// IMP=0x00000000000137e2
- (Class)classForCoder;	// IMP=0x00000000000137d8
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000137bb
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001379e
- (unsigned long long)length;	// IMP=0x0000000000013781
- (id)description;	// IMP=0x000000000001375c
- (id)debugDescription;	// IMP=0x0000000000013685
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013579
- (unsigned long long)hash;	// IMP=0x00000000000134ec
- (id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;	// IMP=0x00000000000133f1
- (id)init;	// IMP=0x000000000001336a

@end
