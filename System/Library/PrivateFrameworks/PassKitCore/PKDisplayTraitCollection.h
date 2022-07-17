//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDisplayTraitCollection : NSObject <NSSecureCoding>
{
    double _canvasScale;	// 8 = 0x8
    struct CGSize _canvasSize;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003ee70
@property(nonatomic) double canvasScale; // @synthesize canvasScale=_canvasScale;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ef6b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003eee5
- (id)initWithDefaultTraits;	// IMP=0x000000000003eea7
- (id)init;	// IMP=0x000000000003ee78

@end
