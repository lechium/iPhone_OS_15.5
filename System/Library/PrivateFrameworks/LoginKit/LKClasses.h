//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoginKit/LKClassProviding-Protocol.h>

@class NSArray, NSString;

@interface LKClasses : NSObject <LKClassProviding>
{
    NSArray *_classes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e168
@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
- (_Bool)isEqualToLKClasses:(id)arg1;	// IMP=0x000000000000dff2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000df86
- (id)initWithClassArray:(id)arg1;	// IMP=0x000000000000df1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
