//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DDCopyAction
{
    NSString *_query;	// 96 = 0x60
    long long _dataOwner;	// 104 = 0x68
}

+ (_Bool)actionAvailableForContact:(id)arg1;	// IMP=0x0000000000032761
- (void).cxx_destruct;	// IMP=0x00000000000336f2
- (_Bool)canBePerformedWhenDeviceIsLocked;	// IMP=0x00000000000336ea
- (void)performFromView:(id)arg1;	// IMP=0x00000000000331da
- (void)_copyStringOnly:(id)arg1;	// IMP=0x0000000000032ff1
- (void)_copyURL:(id)arg1;	// IMP=0x0000000000032b11
- (id)iconName;	// IMP=0x0000000000032b04
- (id)localizedName;	// IMP=0x000000000003278f
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;	// IMP=0x00000000000326fa
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange)arg2 context:(id)arg3;	// IMP=0x0000000000033705

@end

