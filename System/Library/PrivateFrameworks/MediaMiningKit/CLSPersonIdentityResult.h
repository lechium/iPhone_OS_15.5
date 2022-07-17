//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSPersonIdentity;

@interface CLSPersonIdentityResult : NSObject
{
    float _confidence;	// 8 = 0x8
    CLSPersonIdentity *_person;	// 16 = 0x10
}

+ (id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2;	// IMP=0x0000000000076f5f
- (void).cxx_destruct;	// IMP=0x0000000000076f4f
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSPersonIdentity *person; // @synthesize person=_person;
- (id)description;	// IMP=0x0000000000076ef0
- (void)mergeWithResult:(id)arg1;	// IMP=0x0000000000076e37
- (_Bool)isSamePersonAsResult:(id)arg1;	// IMP=0x0000000000076da6

@end
