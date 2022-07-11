// WARNING
//
// This file has been generated automatically by Rider IDE
//   to store outlets and actions made in Xcode.
// If it is removed, they will be lost.
// Manual changes to this file may not be handled correctly.
//
using Foundation;
using System.CodeDom.Compiler;

namespace TP3
{
	[Register ("ViewController")]
	partial class ViewController
	{
		[Outlet]
		AppKit.NSTextFieldCell actualTemp { get; set; }

		[Outlet]
		AppKit.NSTextField airCriteria { get; set; }

		[Outlet]
		AppKit.NSTextField airCriteriaInterpretation { get; set; }

		[Outlet]
		AppKit.NSTextField choiceCity { get; set; }

		[Outlet]
		AppKit.NSTextField dateFive { get; set; }

		[Outlet]
		AppKit.NSTextField dateFour { get; set; }

		[Outlet]
		AppKit.NSTextField dateOne { get; set; }

		[Outlet]
		AppKit.NSTextField dateThree { get; set; }

		[Outlet]
		AppKit.NSTextField dateTomorrow { get; set; }

		[Outlet]
		AppKit.NSTextField dateTwo { get; set; }

		[Outlet]
		AppKit.NSTextField description { get; set; }

		[Outlet]
		AppKit.NSTextField errorCity { get; set; }

		[Outlet]
		AppKit.NSImageView iconOne { get; set; }

		[Outlet]
		AppKit.NSImageView iconWeatherOne { get; set; }

		[Outlet]
		AppKit.NSTextField maxFive { get; set; }

		[Outlet]
		AppKit.NSTextField maxFour { get; set; }

		[Outlet]
		AppKit.NSTextField maxOne { get; set; }

		[Outlet]
		AppKit.NSTextField maxThree { get; set; }

		[Outlet]
		AppKit.NSTextField maxTwo { get; set; }

		[Outlet]
		AppKit.NSTextField midday { get; set; }

		[Outlet]
		AppKit.NSTextField midnight { get; set; }

		[Outlet]
		AppKit.NSTextField minFive { get; set; }

		[Outlet]
		AppKit.NSTextField minFour { get; set; }

		[Outlet]
		AppKit.NSTextField minOne { get; set; }

		[Outlet]
		AppKit.NSTextField minThree { get; set; }

		[Outlet]
		AppKit.NSTextField minTwo { get; set; }

		[Outlet]
		AppKit.NSTextField nineAM { get; set; }

		[Outlet]
		AppKit.NSTextField ninePM { get; set; }

		[Outlet]
		AppKit.NSTextField pressure { get; set; }

		[Outlet]
		AppKit.NSTextField pressureInterpretation { get; set; }

		[Outlet]
		AppKit.NSTextField sixAM { get; set; }

		[Outlet]
		AppKit.NSTextField sixPM { get; set; }

		[Outlet]
		AppKit.NSTextField sunriseTime { get; set; }

		[Outlet]
		AppKit.NSTextField sunsetTime { get; set; }

		[Outlet]
		AppKit.NSTextField threeAM { get; set; }

		[Outlet]
		AppKit.NSTextField threePM { get; set; }

		[Outlet]
		AppKit.NSTextField windSpeed { get; set; }

		[Outlet]
		AppKit.NSTextField windSpeedInterpretation { get; set; }

		[Action ("FindInformation:")]
		partial void FindInformation (AppKit.NSButton sender);

		void ReleaseDesignerOutlets ()
		{
			if (actualTemp != null) {
				actualTemp.Dispose ();
				actualTemp = null;
			}

			if (airCriteria != null) {
				airCriteria.Dispose ();
				airCriteria = null;
			}

			if (airCriteriaInterpretation != null) {
				airCriteriaInterpretation.Dispose ();
				airCriteriaInterpretation = null;
			}

			if (choiceCity != null) {
				choiceCity.Dispose ();
				choiceCity = null;
			}

			if (dateTomorrow != null) {
				dateTomorrow.Dispose ();
				dateTomorrow = null;
			}

			if (dateOne != null) {
				dateOne.Dispose ();
				dateOne = null;
			}

			if (dateTwo != null) {
				dateTwo.Dispose ();
				dateTwo = null;
			}

			if (dateThree != null) {
				dateThree.Dispose ();
				dateThree = null;
			}

			if (dateFour != null) {
				dateFour.Dispose ();
				dateFour = null;
			}

			if (dateFive != null) {
				dateFive.Dispose ();
				dateFive = null;
			}

			if (description != null) {
				description.Dispose ();
				description = null;
			}

			if (errorCity != null) {
				errorCity.Dispose ();
				errorCity = null;
			}

			if (iconOne != null) {
				iconOne.Dispose ();
				iconOne = null;
			}

			if (iconWeatherOne != null) {
				iconWeatherOne.Dispose ();
				iconWeatherOne = null;
			}

			if (midday != null) {
				midday.Dispose ();
				midday = null;
			}

			if (midnight != null) {
				midnight.Dispose ();
				midnight = null;
			}

			if (minOne != null) {
				minOne.Dispose ();
				minOne = null;
			}

			if (maxOne != null) {
				maxOne.Dispose ();
				maxOne = null;
			}

			if (minTwo != null) {
				minTwo.Dispose ();
				minTwo = null;
			}

			if (maxTwo != null) {
				maxTwo.Dispose ();
				maxTwo = null;
			}

			if (minThree != null) {
				minThree.Dispose ();
				minThree = null;
			}

			if (maxThree != null) {
				maxThree.Dispose ();
				maxThree = null;
			}

			if (minFour != null) {
				minFour.Dispose ();
				minFour = null;
			}

			if (maxFour != null) {
				maxFour.Dispose ();
				maxFour = null;
			}

			if (minFive != null) {
				minFive.Dispose ();
				minFive = null;
			}

			if (maxFive != null) {
				maxFive.Dispose ();
				maxFive = null;
			}

			if (nineAM != null) {
				nineAM.Dispose ();
				nineAM = null;
			}

			if (ninePM != null) {
				ninePM.Dispose ();
				ninePM = null;
			}

			if (pressure != null) {
				pressure.Dispose ();
				pressure = null;
			}

			if (pressureInterpretation != null) {
				pressureInterpretation.Dispose ();
				pressureInterpretation = null;
			}

			if (sixAM != null) {
				sixAM.Dispose ();
				sixAM = null;
			}

			if (sixPM != null) {
				sixPM.Dispose ();
				sixPM = null;
			}

			if (sunriseTime != null) {
				sunriseTime.Dispose ();
				sunriseTime = null;
			}

			if (sunsetTime != null) {
				sunsetTime.Dispose ();
				sunsetTime = null;
			}

			if (threeAM != null) {
				threeAM.Dispose ();
				threeAM = null;
			}

			if (threePM != null) {
				threePM.Dispose ();
				threePM = null;
			}

			if (windSpeed != null) {
				windSpeed.Dispose ();
				windSpeed = null;
			}

			if (windSpeedInterpretation != null) {
				windSpeedInterpretation.Dispose ();
				windSpeedInterpretation = null;
			}

		}
	}
}
