//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AllRefinementsViewModelToggle : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_refinementKey;	// 24 = 0x18
    id _data;	// 32 = 0x20
    NSNumber *_selectionSequenceNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000088aa79
@property(retain, nonatomic) NSNumber *selectionSequenceNumber; // @synthesize selectionSequenceNumber=_selectionSequenceNumber;
@property(readonly, nonatomic) id data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *refinementKey; // @synthesize refinementKey=_refinementKey;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000088a965
- (id)initWithDisplayName:(id)arg1 isSelected:(_Bool)arg2 data:(id)arg3 refinementKey:(id)arg4;	// IMP=0x001000000088a884

@end
