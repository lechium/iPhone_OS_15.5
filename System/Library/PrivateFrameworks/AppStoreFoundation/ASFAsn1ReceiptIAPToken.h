//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASFAsn1Token, NSString;

__attribute__((visibility("hidden")))
@interface ASFAsn1ReceiptIAPToken : NSObject
{
    unsigned long long mType;	// 8 = 0x8
    unsigned long long mTypeVersion;	// 16 = 0x10
    ASFAsn1Token *mContentToken;	// 24 = 0x18
}

+ (id)readFromBuffer:(id)arg1;	// IMP=0x00000000000015c7
- (void).cxx_destruct;	// IMP=0x00000000000019a9
@property(readonly) ASFAsn1Token *contentToken; // @synthesize contentToken=mContentToken;
@property(readonly) unsigned long long typeVersion; // @synthesize typeVersion=mTypeVersion;
@property(readonly) unsigned long long type; // @synthesize type=mType;
@property(readonly) unsigned long long integerValue;
@property(readonly) NSString *stringValue;
- (id)description;	// IMP=0x0000000000001804
- (id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3;	// IMP=0x0000000000001546

@end

