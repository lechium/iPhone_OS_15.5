//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLayoutElementProviding-Protocol.h>

@class NSString;

@interface SBSwitcherAccessoryLayoutElement : NSObject <SBSwitcherLayoutElementProviding>
{
    unsigned long long _type;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)switcherLayoutElementType;	// IMP=0x000000000027f677
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x000000000027f63a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
