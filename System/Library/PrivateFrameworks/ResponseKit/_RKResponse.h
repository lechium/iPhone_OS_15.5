//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _RKResponse : NSObject
{
    NSString *_speechAct;	// 8 = 0x8
    NSString *_headword;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003da6
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) NSString *headword; // @synthesize headword=_headword;
@property(readonly) NSString *speechAct; // @synthesize speechAct=_speechAct;
@property(readonly) unsigned long long type;
- (id)description;	// IMP=0x000000000000394a
- (unsigned long long)hash;	// IMP=0x00000000000038e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000037e2
- (id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3;	// IMP=0x000000000000372b
- (id)init;	// IMP=0x0000000000003708

@end
