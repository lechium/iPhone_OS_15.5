//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKBrushList
{
    NSArray *_brushList;	// 16 = 0x10
}

+ (id)brushListWithBrushes:(id)arg1;	// IMP=0x0000000000008078
- (void).cxx_destruct;	// IMP=0x0000000000008444
@property(retain, nonatomic) NSArray *brushList; // @synthesize brushList=_brushList;
- (void)didDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;	// IMP=0x0000000000008419
- (void)willDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;	// IMP=0x0000000000008413
- (struct CGRect)drawRectForBrushAtIndex:(unsigned long long)arg1 fromRect:(struct CGRect)arg2 input:(id)arg3;	// IMP=0x00000000000083fb
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x0000000000008149
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000080d2

@end
