//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NTKUtilities)
+ (id)NTKHyphenatableString:(id)arg1 factor:(float)arg2;	// IMP=0x0000000000030266
+ (id)NTKHyphenatableString:(id)arg1;	// IMP=0x0000000000030249
+ (id)NTKCountdownToDate:(id)arg1 useShort:(_Bool)arg2 withDesignatorFont:(id)arg3;	// IMP=0x000000000002fd07
+ (id)NTKReplaceTimeDesignatorAttributesFrom:(id)arg1 withDesignatorFont:(id)arg2;	// IMP=0x000000000002fb55
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorAttributes:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000002f962
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000002f856
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2;	// IMP=0x000000000002f83a
+ (id)NTKDesignatorAttributedTimeWithDate:(id)arg1;	// IMP=0x000000000002f756
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000002f737
@end
