//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface _CPBundleIdentifierString : NSString
{
    NSString *_executablePath;	// 8 = 0x8
    NSString *_bundleIdentifierOrProcessName;	// 16 = 0x10
    _Bool _isProcessName;	// 24 = 0x18
}

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000421f
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000041da
- (unsigned long long)length;	// IMP=0x00000000000041a4
- (_Bool)_isProcessName;	// IMP=0x000000000000417d
- (void)_loadBundleIdentifierOrProcessName;	// IMP=0x000000000000405d
- (void)dealloc;	// IMP=0x0000000000004005
- (id)_initWithExecutablePath:(id)arg1;	// IMP=0x0000000000003fae

@end

