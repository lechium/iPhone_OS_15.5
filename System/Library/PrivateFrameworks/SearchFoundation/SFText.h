//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFText-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int maxLines:1;
    } _has;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    unsigned long long _maxLines;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023c5d
+ (id)textWithString:(id)arg1;	// IMP=0x00000000000236c5
- (void).cxx_destruct;	// IMP=0x0000000000023c4d
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(copy) NSString *text; // @synthesize text=_text;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023b20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023ab3
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023964
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000238b2
- (_Bool)hasMaxLines;	// IMP=0x00000000000238a7
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002252d
- (unsigned long long)length;	// IMP=0x00000000000224e9
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001f3ca6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

