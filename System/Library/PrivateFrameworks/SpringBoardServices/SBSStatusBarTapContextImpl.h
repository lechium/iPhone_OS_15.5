//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSSecureCoding-Protocol.h>
#import <SpringBoardServices/SBSStatusBarTapContext-Protocol.h>

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>
{
    unsigned long long _styleOverride;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002494f
@property(nonatomic) unsigned long long styleOverride; // @synthesize styleOverride=_styleOverride;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000248cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002481f
- (id)initWithStyleOverride:(unsigned long long)arg1;	// IMP=0x00000000000247e2

@end

