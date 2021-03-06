//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/PKIdentifiable-Protocol.h>

@class NSArray, NSString;
@protocol NSCopying;

@interface PKApplyActionContentActionItem : NSObject <NSCopying, PKIdentifiable>
{
    NSArray *_items;	// 8 = 0x8
    NSString *_contextPrimaryActionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000269ced
@property(readonly, copy, nonatomic) NSString *contextPrimaryActionIdentifier; // @synthesize contextPrimaryActionIdentifier=_contextPrimaryActionIdentifier;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000269c4c
@property(readonly, nonatomic) id <NSCopying> identifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002697b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

