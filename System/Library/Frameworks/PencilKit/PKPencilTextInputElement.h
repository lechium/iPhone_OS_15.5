//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface PKPencilTextInputElement : NSObject
{
    id <NSObject><NSCopying> _identifier;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000042a15
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000042907
- (id)initWithIdentifier:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000000042879

@end

