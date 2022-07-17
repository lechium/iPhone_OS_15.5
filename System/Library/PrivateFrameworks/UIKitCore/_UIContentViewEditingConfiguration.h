//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface _UIContentViewEditingConfiguration : NSObject <NSCopying>
{
    _Bool _useTextInputAsLabel;	// 8 = 0x8
    _Bool _selectAllTextWhenEditingBegins;	// 9 = 0x9
    CDUnknownBlockType _didEndHandler;	// 16 = 0x10
    CDUnknownBlockType _shouldBeginHandler;	// 24 = 0x18
    CDUnknownBlockType _shouldChangeHandler;	// 32 = 0x20
    CDUnknownBlockType _shouldEndHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000bd20c8
@property(copy, nonatomic) CDUnknownBlockType shouldEndHandler; // @synthesize shouldEndHandler=_shouldEndHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldChangeHandler; // @synthesize shouldChangeHandler=_shouldChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginHandler; // @synthesize shouldBeginHandler=_shouldBeginHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType didEndHandler; // @synthesize didEndHandler=_didEndHandler;
@property(nonatomic) _Bool selectAllTextWhenEditingBegins; // @synthesize selectAllTextWhenEditingBegins=_selectAllTextWhenEditingBegins;
@property(nonatomic) _Bool useTextInputAsLabel; // @synthesize useTextInputAsLabel=_useTextInputAsLabel;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd1f6e
- (id)initWithDidEndHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bd1e7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd1db3

@end
