//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFCallSiteInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    NSString *_imagePath;	// 8 = 0x8
    NSString *_symbolName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000121d79
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122293
- (void).cxx_destruct;	// IMP=0x0000000000122076
@property(readonly, copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (id)buildDictionaryRepresentation;	// IMP=0x0000000000121fe1
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000121eb4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000121e46
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000121d81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000121d6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000121c65
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000121a66
@property(readonly, copy) NSString *description;
- (id)initWithImagePath:(id)arg1 symbolName:(id)arg2;	// IMP=0x0000000000121999
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122302

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

