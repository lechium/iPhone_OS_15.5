//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDCanvasSelection-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo;
@protocol TSDContainerInfo;

@interface TSDCanvasSelection <TSDCanvasSelection, NSCopying>
{
    NSSet *mInfos;	// 8 = 0x8
    TSDDrawableInfo<TSDContainerInfo> *mContainer;	// 16 = 0x10
}

+ (id)emptySelection;	// IMP=0x00000000001238bc
@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // @synthesize container=mContainer;
- (id)copyExcludingInfo:(id)arg1;	// IMP=0x0000000000123faa
- (id)copyIncludingInfo:(id)arg1;	// IMP=0x0000000000123f0d
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;	// IMP=0x0000000000123dc0
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;	// IMP=0x0000000000123bce
- (id)infosOfClass:(Class)arg1;	// IMP=0x0000000000123b51
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001239d3
@property(readonly, nonatomic) unsigned long long infoCount;
@property(readonly, nonatomic) NSSet *infos;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000123960
- (void)dealloc;	// IMP=0x0000000000123908
- (id)initWithInfos:(id)arg1;	// IMP=0x00000000001238a8
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;	// IMP=0x0000000000123691

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

