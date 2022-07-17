//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;	// 8 = 0x8
}

+ (id)textWithAttributedString:(id)arg1;	// IMP=0x0000000000081708
+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008167d
- (void).cxx_destruct;	// IMP=0x00000000000831c1
@property(readonly, retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083167
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000830f2
- (unsigned long long)hash;	// IMP=0x00000000000830dc
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082f09
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082dd1
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;	// IMP=0x0000000000082b09
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000824b6
- (id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(CDUnknownBlockType)arg2 style:(id)arg3;	// IMP=0x0000000000081dc6
- (id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;	// IMP=0x0000000000081ba4
- (id)_attributesWithFont:(id)arg1 style:(id)arg2;	// IMP=0x0000000000081ac4
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id *)arg5;	// IMP=0x00000000000819d2
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;	// IMP=0x00000000000819af
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 defaultAttributes:(id *)arg3;	// IMP=0x00000000000818d8
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2;	// IMP=0x00000000000818c3
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4;	// IMP=0x0000000000081824
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;	// IMP=0x0000000000081793
@property(readonly, retain, nonatomic) NSString *string;

@end
