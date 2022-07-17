//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCUIMenuModuleItem : NSObject
{
    _Bool _busy;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    _Bool _placeholder;	// 10 = 0xa
    NSString *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000016c6d
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isBusy) _Bool busy; // @synthesize busy=_busy;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)performAction;	// IMP=0x0000000000016bbe
- (id)description;	// IMP=0x0000000000016a13
- (unsigned long long)hash;	// IMP=0x00000000000168a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001662f
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016565

@end
