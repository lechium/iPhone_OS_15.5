//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SAStrokeDataInternal;

@interface SAStrokeData : NSObject
{
    SAStrokeDataInternal *_underlyingObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002af0
@property(retain, nonatomic) SAStrokeDataInternal *underlyingObject; // @synthesize underlyingObject=_underlyingObject;
- (id)initWithCharacters:(id)arg1 strokeAnimationRepresention:(id)arg2 strokeNames:(id)arg3 pronunciations:(id)arg4;	// IMP=0x0000000000002920
- (id)initWithCharacter:(id)arg1 strokeAnimationRepresention:(id)arg2 strokeNames:(id)arg3 pronunciation:(id)arg4;	// IMP=0x0000000000002630

@end

