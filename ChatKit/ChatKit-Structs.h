/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <GraphicsServices/GSEvent.h>
#import <UIKit/UIKit-Structs.h>
#import <CoreGraphics/CoreGraphics.h>
#import <AddressBook/AddressBook.h>
#import <ImageIO/ImageIO.h>

typedef struct __CKSMSRecord* CKSMSRecordRef;

typedef struct __CKSMSAddress* CKSMSAddressRef;

#if __cplusplus
extern "C" {
#endif
	
	BOOL isEmoji(unichar character);
	
	CGFloat CKGetMaxPreviewImageDimensionLength();	// == 129
	UIColor* CKGetTextEntryBackgroundColor();
	NSString* CKLocalizedSMSActionString();
	NSString* CKLocalizedMMSActionString(NSString* who);
	
	BOOL CKDeviceSupportsVideo();
	void CKLog(NSString* context, NSString* format, ...);
	BOOL CKShouldPlaySMSSounds();
	ABAddressBookRef CKGetAddressBook();
	BOOL CKMMSEnabled();
	BOOL CKShowSubjectEnabled();
	
#if __cplusplus
}
#endif
