//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject
{
    _Bool _confirmed;	// 8 = 0x8
    PHFace *_keyFace;	// 16 = 0x10
    PHPerson *_person;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a84c
@property(readonly, nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) PHFace *keyFace; // @synthesize keyFace=_keyFace;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(_Bool)arg3;	// IMP=0x000000000001a775

@end

