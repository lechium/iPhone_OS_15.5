//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HCHuffmanCoder, NSNumber, NSString, NSUUID;

@interface TIDPWordRecord : NSObject
{
    NSNumber *_wordPosition;	// 8 = 0x8
    NSString *_word;	// 16 = 0x10
    HCHuffmanCoder *_coder;	// 24 = 0x18
}

+ (id)word:(id)arg1 atPosition:(id)arg2 coder:(id)arg3;	// IMP=0x00000000001a7143
+ (id)word:(id)arg1 atPosition:(id)arg2;	// IMP=0x00000000001a712e
- (void).cxx_destruct;	// IMP=0x00000000001a70fb
@property(retain, nonatomic) HCHuffmanCoder *coder; // @synthesize coder=_coder;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSNumber *wordPosition; // @synthesize wordPosition=_wordPosition;
- (id)toDPWordRecord;	// IMP=0x00000000001a70a3
@property(readonly, nonatomic) NSUUID *coderVersion;
@property(readonly, nonatomic) NSString *codedWordAsString;
@property(readonly, nonatomic) NSNumber *codedWord;
@property(readonly, nonatomic) NSString *cleanedWord;

@end
