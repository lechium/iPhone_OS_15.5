//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying>
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSString *_inputCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014eea8
@property(readonly, nonatomic) NSDictionary *redeemCodeDictionary; // @synthesize redeemCodeDictionary=_dictionary;
@property(copy, nonatomic) NSString *inputCode; // @synthesize inputCode=_inputCode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014edf4
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) _Bool allowsAutoSubmission;
@property(readonly, nonatomic) NSString *codeType;
@property(readonly, nonatomic) NSString *code;
- (id)initWithRedeemCodeDictionary:(id)arg1;	// IMP=0x000000000014e8ee

@end

