//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreEmbeddedSpeechRecognition/NSCopying-Protocol.h>
#import <CoreEmbeddedSpeechRecognition/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CESRVocabularyCategory : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_templateName;	// 8 = 0x8
    NSString *_tagName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026950
- (void).cxx_destruct;	// IMP=0x0000000000026e30
@property(readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026dd0
- (id)description;	// IMP=0x0000000000026ce0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026b00
- (unsigned long long)hash;	// IMP=0x0000000000026a60
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000268d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026790
- (id)initWithTemplateName:(id)arg1 tagName:(id)arg2;	// IMP=0x00000000000266a0

@end

