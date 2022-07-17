//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, SUNavigationContainerViewController, SUScriptNavigationItem;

@interface SUScriptNavigationTransition
{
    long long _status;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    SUNavigationContainerViewController *_container;	// 88 = 0x58
    long long _fromIndex;	// 96 = 0x60
    long long _toIndex;	// 104 = 0x68
    NSString *_rightBarButton;	// 112 = 0x70
    NSMutableArray *_finishBlocks;	// 120 = 0x78
}

+ (void)initialize;	// IMP=0x000000000008b27b
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000008b177
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000008b0ed
- (void).cxx_destruct;	// IMP=0x000000000008b361
@property(retain, nonatomic) NSMutableArray *finishBlocks; // @synthesize finishBlocks=_finishBlocks;
@property(retain, nonatomic) NSString *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
- (id)scriptAttributeKeys;	// IMP=0x000000000008b1f4
- (id)attributeKeys;	// IMP=0x000000000008b1e2
- (id)_className;	// IMP=0x000000000008b0e0
- (void)finishedLoading;	// IMP=0x000000000008af0b
@property(retain, nonatomic) SUScriptNavigationItem *topNavigationItem;
@property(nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(nonatomic) long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(nonatomic) long long status;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008acae
- (id)initWithContainer:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008ab89

@end
