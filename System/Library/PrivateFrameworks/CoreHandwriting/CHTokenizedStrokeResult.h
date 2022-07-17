//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CHTokenizedStrokeResult : NSObject
{
    long long _resultLevel;	// 8 = 0x8
    NSSet *_strokeIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000014410
@property(readonly, copy, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) long long resultLevel; // @synthesize resultLevel=_resultLevel;
- (id)initWithStrokeIdentifiers:(id)arg1 resultLevel:(long long)arg2;	// IMP=0x0000000000014370

@end
